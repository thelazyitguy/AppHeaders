//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRCLSURLSessionTaskDelegate-Protocol.h"

@class FIRCLSURLSessionDataTask, NSData, NSURLResponse;

@protocol FIRCLSURLSessionDataDelegate <FIRCLSURLSessionTaskDelegate>
- (void)task:(FIRCLSURLSessionDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)task:(FIRCLSURLSessionDataTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end
