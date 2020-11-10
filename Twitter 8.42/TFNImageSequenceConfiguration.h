//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface TFNImageSequenceConfiguration : NSObject
{
    NSString *_imageSequence;
    NSBundle *_bundle;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _frameCount;
    double _duration;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy, nonatomic) NSString *imageSequence; // @synthesize imageSequence=_imageSequence;
- (id)initWithImageSequence:(id)arg1 inBundle:(id)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 frameCount:(unsigned long long)arg5 imageSize:(struct CGSize)arg6 duration:(double)arg7;

@end

