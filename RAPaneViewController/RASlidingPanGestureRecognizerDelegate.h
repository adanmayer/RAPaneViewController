#import <UIKit/UIKit.h>

@class RASlidingPanGestureRecognizer;
@protocol RASlidingPanGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional

- (BOOL) slidingPanGestureRecognizer:(RASlidingPanGestureRecognizer *)recognizer canPreventGestureRecognizer:(UIGestureRecognizer *)otherRecognizer proposedAnswer:(BOOL)superAnswer;

- (BOOL) slidingPanGestureRecognizer:(RASlidingPanGestureRecognizer *)recognizer canBePreventedByGestureRecognizer:(UIGestureRecognizer *)otherRecognizer proposedAnswer:(BOOL)superAnswer;

@end
