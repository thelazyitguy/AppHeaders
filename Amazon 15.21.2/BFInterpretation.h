//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BFInterpretation : NSObject
{
    NSString *_value;
    NSNumber *_confidenceScore;
    unsigned long long _confidenceBin;
}

@property(readonly, nonatomic) unsigned long long confidenceBin; // @synthesize confidenceBin=_confidenceBin;
@property(readonly, nonatomic) NSNumber *confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 confidenceScore:(id)arg2 confidenceBin:(unsigned long long)arg3;
- (id)initWithValue:(id)arg1 confidenceScore:(id)arg2;

@end
