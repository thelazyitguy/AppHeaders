//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageConversationSocialProof-Protocol.h>

@class NSArray, NSString;

@interface TFNDirectMessageConversationSocialProof : NSObject <TFNDirectMessageConversationSocialProof>
{
    NSArray *_users;
    unsigned long long _type;
    unsigned long long _total;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long total; // @synthesize total=_total;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsers:(id)arg1 proofType:(unsigned long long)arg2 totalOverlapCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
