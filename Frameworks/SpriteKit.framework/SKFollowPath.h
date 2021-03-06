/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFollowPath : SKAction {
    struct CGPath { } * _cgPath;
    struct SKCFollowPath { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; unsigned int x20; struct PKPath {} *x21; struct { float x_22_1_1; float x_22_1_2; } x22; bool x23; bool x24; } * _mycaction;
}

+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 speed:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 speed:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
