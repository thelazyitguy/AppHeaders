//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSNumber;

@interface AWSFirehoseBufferingHints : AWSModel
{
    NSNumber *_intervalInSeconds;
    NSNumber *_sizeInMBs;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *sizeInMBs; // @synthesize sizeInMBs=_sizeInMBs;
@property(retain, nonatomic) NSNumber *intervalInSeconds; // @synthesize intervalInSeconds=_intervalInSeconds;

@end
