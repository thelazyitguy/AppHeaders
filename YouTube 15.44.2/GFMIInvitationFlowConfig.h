//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GFMIInvitationFlowConfig : NSObject
{
    NSArray *_pages;
    unsigned long long _remainingInvitationsCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long remainingInvitationsCount; // @synthesize remainingInvitationsCount=_remainingInvitationsCount;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (id)description;
- (id)pageWithType:(long long)arg1;
- (id)initWithPages:(id)arg1 remainingInvitationsCount:(unsigned long long)arg2;

@end

