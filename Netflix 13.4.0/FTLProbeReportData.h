//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface FTLProbeReportData : NSObject
{
    NSString *_name;
    NSURL *_url;
    NSMutableArray *_pulses;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pulses; // @synthesize pulses=_pulses;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)addPulse:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2;

@end
