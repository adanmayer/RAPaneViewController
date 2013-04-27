#import <UIKit/UIKit.h>
#import "RASlidingPanGestureRecognizerDelegate.h"

@interface RASlidingPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic, assign) id<RASlidingPanGestureRecognizerDelegate> delegate;

@end
