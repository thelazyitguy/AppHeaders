//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAAPIClient.h>

@interface UAEventAPIClient : UAAPIClient
{
}

+ (id)clientWithConfig:(id)arg1 session:(id)arg2;
+ (id)clientWithConfig:(id)arg1;
- (id)requestWithEvents:(id)arg1 headers:(id)arg2;
- (void)uploadEvents:(id)arg1 headers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
