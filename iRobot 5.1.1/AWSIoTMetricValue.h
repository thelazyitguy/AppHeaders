//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSNumber;

@interface AWSIoTMetricValue : AWSModel
{
    NSArray *_cidrs;
    NSNumber *_count;
    NSArray *_ports;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *ports; // @synthesize ports=_ports;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray *cidrs; // @synthesize cidrs=_cidrs;
- (void).cxx_destruct;

@end
