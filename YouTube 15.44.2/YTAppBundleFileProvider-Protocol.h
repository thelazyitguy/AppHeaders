//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol YTAppBundleFileProvider <NSObject>
- (void)imageForFileWithFileId:(NSString *)arg1 completion:(void (^)(UIImage *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)bytesForFileWithFileId:(NSString *)arg1 completion:(void (^)(NSData *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

