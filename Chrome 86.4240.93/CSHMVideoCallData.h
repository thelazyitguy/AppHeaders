//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSString;

@interface CSHMVideoCallData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool cancelRequest; // @dynamic cancelRequest;
@property(nonatomic) _Bool hasCancelRequest; // @dynamic hasCancelRequest;
@property(nonatomic) _Bool hasIssueDescription; // @dynamic hasIssueDescription;
@property(nonatomic) _Bool hasPoolId; // @dynamic hasPoolId;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSString *issueDescription; // @dynamic issueDescription;
@property(copy, nonatomic) NSString *poolId; // @dynamic poolId;
@property(nonatomic) long long version; // @dynamic version;

@end
