//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, VPBDuration;

@interface VCPBGetClientAccessPermissionResponse_MemoizeOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMemoId; // @dynamic hasMemoId;
@property(nonatomic) _Bool hasValidityDuration; // @dynamic hasValidityDuration;
@property(copy, nonatomic) NSString *memoId; // @dynamic memoId;
@property(retain, nonatomic) VPBDuration *validityDuration; // @dynamic validityDuration;

@end
