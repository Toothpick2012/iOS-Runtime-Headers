/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIViewController;

@interface GKModalRootViewController : UIViewController {
    NSInteger _statusBarOrientation;
    UIViewController *oldDelegate;
    UIViewController *oldRootViewController;
}

@property(retain) UIViewController *oldDelegate;
@property(retain) UIViewController *oldRootViewController;

- (void)dealloc;
- (void)loadView;
- (id)oldDelegate;
- (id)oldRootViewController;
- (void)removeChildViewController:(id)arg1;
- (void)setOldDelegate:(id)arg1;
- (void)setOldRootViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;

@end