//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC18ElectrodeContainer17WalmartNextDayAPI;

@interface WalmartNextDayAPIImpl : NSObject
{
    _TtC18ElectrodeContainer17WalmartNextDayAPI *_nextDayAPI;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC18ElectrodeContainer17WalmartNextDayAPI *nextDayAPI; // @synthesize nextDayAPI=_nextDayAPI;
- (id)createNextDayInfo;
- (void)getNextDayInfo;
- (id)init;

@end
