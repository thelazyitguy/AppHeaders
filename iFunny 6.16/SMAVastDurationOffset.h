//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAVastModel.h>

@class NSString;

@interface SMAVastDurationOffset : SMAVastModel
{
    unsigned long long _type;
    NSString *_offset;
}

@property(copy, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (double)timeIntervalForVideoWithDuration:(double)arg1;
- (id)initWithDictionary:(id)arg1;

@end
