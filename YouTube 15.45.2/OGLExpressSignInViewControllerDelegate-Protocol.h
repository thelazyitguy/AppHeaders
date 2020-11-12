//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, UIViewController;
@protocol OGLAccount, OGLExpressSignInProtocol;

@protocol OGLExpressSignInViewControllerDelegate <NSObject>
- (void)expressSignInViewController:(UIViewController<OGLExpressSignInProtocol> *)arg1 didSignInAccount:(id <OGLAccount>)arg2 error:(NSError *)arg3;

@optional
- (void)expressSignInViewController:(UIViewController<OGLExpressSignInProtocol> *)arg1 didSwitchSelectedAccount:(id <OGLAccount>)arg2;
@end
