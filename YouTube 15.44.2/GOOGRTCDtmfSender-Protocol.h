//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString;

@protocol GOOGRTCDtmfSender <NSObject>
@property(readonly, nonatomic) _Bool canInsertDtmf;
- (double)interToneGap;
- (double)duration;
- (NSString *)remainingTones;
- (_Bool)insertDtmf:(NSString *)arg1 duration:(double)arg2 interToneGap:(double)arg3;
@end

