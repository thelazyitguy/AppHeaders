//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAAPIClient.h>

@interface UANamedUserAPIClient : UAAPIClient
{
}

+ (id)clientWithConfig:(id)arg1 session:(id)arg2;
+ (id)clientWithConfig:(id)arg1;
- (id)requestWithPayload:(id)arg1 urlString:(id)arg2;
- (void)disassociate:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)associate:(id)arg1 channelID:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;

@end
