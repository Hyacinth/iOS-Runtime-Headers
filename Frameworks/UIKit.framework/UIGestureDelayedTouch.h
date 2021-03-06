/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIEvent, UITouch;

@interface UIGestureDelayedTouch : NSObject <NSCopying> {
    BOOL _cloneForSecondDelivery;
    int _delayCount;
    UIEvent *_event;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UITouch *_touch;
}

@property BOOL cloneForSecondDelivery;
@property(retain) UIEvent * event;
@property(retain) UITouch * stateWhenDelayed;
@property(retain) UITouch * stateWhenDelivered;
@property(retain) UITouch * touch;

- (BOOL)cloneForSecondDelivery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)decrementDelayCount;
- (int)delayCount;
- (id)description;
- (id)event;
- (void)incrementDelayCount;
- (id)init;
- (int)phaseForDelivery;
- (void)saveCurrentTouchState;
- (void)setCloneForSecondDelivery:(BOOL)arg1;
- (void)setEvent:(id)arg1;
- (void)setStateWhenDelayed:(id)arg1;
- (void)setStateWhenDelivered:(id)arg1;
- (void)setTouch:(id)arg1;
- (id)stateWhenDelayed;
- (id)stateWhenDelivered;
- (double)timestampForDelivery;
- (id)touch;

@end
