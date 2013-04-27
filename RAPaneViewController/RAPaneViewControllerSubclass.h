#import "RAPaneViewController.h"
#import "RASlidingPanGestureRecognizer.h"

@interface RAPaneViewController () <UIGestureRecognizerDelegate, RASlidingPanGestureRecognizerDelegate>

- (CGRect) rectForMasterView;	//	always self.view.bounds
- (CGRect) rectForDetailView;	//	self.view.bounds + { 200.0f, 0.0f } offset if showingMasterViewController

- (CGPoint) detailViewTranslationForGestureTranslation:(CGPoint)translation;	//	{ translation.x, 0 }
- (BOOL) shouldShowMasterViewControllerWithGestureTranslation:(CGPoint)translation velocity:(CGPoint)velocity;	//	looks at velocity.x and showingMasterViewController

- (void) configureMasterView:(UIView *)view;	//	called when view is placed
- (void) configureDetailView:(UIView *)view;	//	called when view is placed
- (void) layoutViews;	//	called internally, override for more layout

@property (nonatomic, readonly, strong) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly, strong) UITapGestureRecognizer *tapGestureRecognizer;

- (void) handlePan:(UIPanGestureRecognizer *)panGR;
- (void) handleTap:(UITapGestureRecognizer *)tapGR;

@end
