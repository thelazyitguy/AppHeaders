//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBAny, NFDCThreadStateUpdate, NSString;

@interface NFDNotificationsUpdateThreadStateByTokenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBAny *badgeCountPayload; // @dynamic badgeCountPayload;
@property(nonatomic) _Bool hasBadgeCountPayload; // @dynamic hasBadgeCountPayload;
@property(nonatomic) _Bool hasThreadStateUpdate; // @dynamic hasThreadStateUpdate;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(retain, nonatomic) NFDCThreadStateUpdate *threadStateUpdate; // @dynamic threadStateUpdate;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end
