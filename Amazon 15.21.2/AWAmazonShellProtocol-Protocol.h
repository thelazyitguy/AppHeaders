//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol AWAmazonShellProtocol <NSObject>
- (void)cancelFullscreenCompletionHandler:(void (^)(void))arg1;
- (void)requestFullscreenCompletionHandler:(void (^)(void))arg1;
- (void)hideProgressDialog:(NSDictionary *)arg1;
- (void)showProgressDialog:(NSDictionary *)arg1;
- (void)hideBarButton:(NSDictionary *)arg1;
- (void)modifyBarButton:(NSDictionary *)arg1;
- (void)showBarButton:(NSDictionary *)arg1;
@end
