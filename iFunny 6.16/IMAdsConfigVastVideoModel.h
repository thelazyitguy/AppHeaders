//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

@class IMAdsConfigBitRate, NSArray;

@interface IMAdsConfigVastVideoModel : IMJSONModel
{
    long long _maxWrapperLimit;
    long long _vastMaxAssetSize;
    long long _optimalVastVideoSize;
    NSArray *_allowedContentType;
    IMAdsConfigBitRate *_bitRate;
}

@property(retain, nonatomic) IMAdsConfigBitRate *bitRate; // @synthesize bitRate=_bitRate;
@property(retain, nonatomic) NSArray *allowedContentType; // @synthesize allowedContentType=_allowedContentType;
@property(nonatomic) long long optimalVastVideoSize; // @synthesize optimalVastVideoSize=_optimalVastVideoSize;
@property(nonatomic) long long vastMaxAssetSize; // @synthesize vastMaxAssetSize=_vastMaxAssetSize;
@property(nonatomic) long long maxWrapperLimit; // @synthesize maxWrapperLimit=_maxWrapperLimit;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end

