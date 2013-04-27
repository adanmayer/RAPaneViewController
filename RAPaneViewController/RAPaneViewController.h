#import <UIKit/UIKit.h>

@interface RAPaneViewController : UIViewController

@property (nonatomic, readwrite, assign) BOOL showingMasterViewController;
@property (nonatomic, readwrite, strong) IBOutlet UIViewController *masterViewController;
@property (nonatomic, readwrite, strong) IBOutlet UIViewController *detailViewController;

- (void) setShowingMasterViewController:(BOOL)showingMasterViewController animated:(BOOL)animate completion:(void(^)(BOOL didFinish))callback;

- (void) setMasterViewController:(UIViewController *)toMasterVC animated:(BOOL)animate completion:(void(^)(BOOL didFinish))callback;
- (void) setDetailViewController:(UIViewController *)toDetailVC animated:(BOOL)animate completion:(void(^)(BOOL didFinish))callback;

@end
