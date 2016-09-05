using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Movement : MonoBehaviour {
	
	public float speed;
	public float jumpForce;
	Rigidbody2D RB;
	public string FloorTag;
	public string MetalCrateTag;
	public string PowerCrateTag;
	public GameObject dieCanvas;
	bool grounded = false;
	bool goRight = true;
	bool dead;
	void Start(){
		RB = GetComponent<Rigidbody2D>();
	}
	void FixedUpdate(){
		if (goRight) {
			transform.position += new Vector3 (speed * Time.deltaTime, 0, 0);
		}
		if(grounded){
			if(Input.GetKeyDown(KeyCode.Space)){
				RB.AddRelativeForce(new Vector2(0, jumpForce), ForceMode2D.Impulse);
			}
		}
		if (dead) {
			goRight = false;
			dieCanvas.SetActive(true);
		}

	}
	bool setGrounded;
	void OnCollisionStay2D(Collision2D col){
		if (col.gameObject.tag == FloorTag) {
			grounded = true;
			setGrounded = false;
		} else if (col.gameObject.tag == MetalCrateTag) {
			goRight = false;
		} else if (col.gameObject.tag == PowerCrateTag) {
			dead = true;
			Time.timeScale = 0.5f;
			RB.AddRelativeForce(new Vector2(-60, 0), ForceMode2D.Impulse);
		}
	}
	void OnCollisionExit2D(Collision2D col){
		if (col.gameObject.tag == FloorTag) {
			setGrounded = true;
			StartCoroutine(CheckCol(col));
		}
		else if (col.gameObject.tag == MetalCrateTag) {
			goRight = true;
		}
		else if (col.gameObject.tag == PowerCrateTag) {
			goRight = true;
		}
	}
	IEnumerator CheckCol(Collision2D col){
		yield return new WaitForSeconds (0.1f);
		if (setGrounded && col.gameObject.tag == FloorTag) {
			grounded = false;
		}
	}
	public void JumpButtonDown(){
		if(grounded){
			RB.AddRelativeForce(new Vector2(0, jumpForce), ForceMode2D.Impulse);
		}
	}
	public void JumpButtonDown2(){
		if(grounded){
			RB.AddRelativeForce(new Vector2(10, jumpForce), ForceMode2D.Impulse);
		}
	}
}
