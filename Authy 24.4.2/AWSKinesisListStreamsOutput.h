//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSNumber;

@interface AWSKinesisListStreamsOutput : AWSModel
{
    NSNumber *_hasMoreStreams;
    NSArray *_streamNames;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *streamNames; // @synthesize streamNames=_streamNames;
@property(retain, nonatomic) NSNumber *hasMoreStreams; // @synthesize hasMoreStreams=_hasMoreStreams;

@end

