//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdTrigger-Protocol.h>

@class NSString;

@interface YTDifferentLayoutIDEnteredTrigger : NSObject <YTAdTrigger>
{
    NSString *_triggerID;
    int _slotType;
    int _layoutType;
    NSString *_nonMatchLayoutID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) int slotType; // @synthesize slotType=_slotType;
@property(readonly, copy, nonatomic) NSString *nonMatchLayoutID; // @synthesize nonMatchLayoutID=_nonMatchLayoutID;
- (unsigned long long)triggerType;
- (id)triggerID;
- (_Bool)collideWithTrigger:(id)arg1;
- (id)initWithTriggerID:(id)arg1 nonMatchLayoutID:(id)arg2 slotType:(int)arg3 layoutType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
