//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseServiceHandler : NSObject
{
    int requestType;
    id targetReceiver;
    NSString *requestComponetType;
}

+ (id)getBaseQVCAPINetworkOperationCancelledError;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestComponetType; // @synthesize requestComponetType;
@property(nonatomic) int requestType; // @synthesize requestType;
@property(retain, nonatomic) id targetReceiver; // @synthesize targetReceiver;
- (id)getBaseQVCAPIResponseErrorWithResponseCode:(id)arg1 CodeDescription:(id)arg2 CodeText:(id)arg3;
- (id)getBaseQVCAPINullResponseError;
- (void)cancelRequest:(id)arg1;
- (void)detachTarget;
- (void)dealloc;

@end

