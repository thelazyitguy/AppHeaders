//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTAdLayout, YTAdSlot;
@protocol YTAdTrigger;

@interface YTAdTriggerBundle : NSObject
{
    unsigned long long _triggerCategory;
    id <YTAdTrigger> _adTrigger;
    YTAdSlot *_slot;
    YTAdLayout *_layout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTAdLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) YTAdSlot *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) id <YTAdTrigger> adTrigger; // @synthesize adTrigger=_adTrigger;
@property(readonly, nonatomic) unsigned long long triggerCategory; // @synthesize triggerCategory=_triggerCategory;
- (id)initWithTriggerCategory:(unsigned long long)arg1 trigger:(id)arg2 slot:(id)arg3 layout:(id)arg4;

@end

