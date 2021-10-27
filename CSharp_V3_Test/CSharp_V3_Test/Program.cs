using System;
//using System.Numerics;

namespace CSharp_V3_Test
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Vector3 playerScale = new Vector3();
            Vector3 playerPos = new Vector3(2, 5);
            Vector3 playerRot = new Vector3(15, 0);
            Vector3 cal = playerPos + playerRot;
            playerPos *= 3;
            //Vector3 playerRot = new Vector3(15, 45);
            //Vector3 playerScale = new Vector3(1, 1, 1);

            Console.WriteLine(playerScale);
            Console.WriteLine(playerPos);
            Console.WriteLine(cal);

            //Console.WriteLine($"{playerRot}\n");
            //Console.WriteLine($"{playerScale}\n");
        }
    }


}

public struct Vector3
{
    public float x;
    public float y;
    public float z;

    public Vector3(float _x, float _y) { x = _x; y = _y; z = 0; }

    public Vector3(float _x, float _y, float _z) { x = _x; y = _y; z = _z; }

    public static Vector3 operator +(Vector3 _left, Vector3 _right) => new Vector3(_left.x + _right.x, _left.y + _right.y, _left.z + _right.z);

    public static Vector3 operator -(Vector3 _left, Vector3 _right) => new Vector3(_left.x - _right.x, _left.y - _right.y, _left.z - _right.z);

    public static Vector3 operator *(Vector3 _left, float _value) => new Vector3(_left.x * _value, _left.y * _value, _left.z * _value);

    public static Vector3 operator /(Vector3 _left, float _value) => new Vector3(_left.x / _value, _left.y / _value, _left.z / _value);

    public override string ToString() => $"<{x}, {y}, {z}>";
}

public class StudyClass
{
    float x, y, z;

    public StudyClass() { x = 0; y = 0; z = 0; }
}