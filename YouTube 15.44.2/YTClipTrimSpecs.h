//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTClipTrimSpecs : NSObject
{
    NSString *_clipAttachmentCreationKey;
    double _defaultClipLength;
    double _minClipLength;
    double _maxClipLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double maxClipLength; // @synthesize maxClipLength=_maxClipLength;
@property(readonly, nonatomic) double minClipLength; // @synthesize minClipLength=_minClipLength;
@property(readonly, nonatomic) double defaultClipLength; // @synthesize defaultClipLength=_defaultClipLength;
@property(readonly, nonatomic) NSString *clipAttachmentCreationKey; // @synthesize clipAttachmentCreationKey=_clipAttachmentCreationKey;
- (id)initWithClipAttachmentCreationKey:(id)arg1 defaultClipLength:(double)arg2 minClipLength:(double)arg3 maxClipLength:(double)arg4;

@end
