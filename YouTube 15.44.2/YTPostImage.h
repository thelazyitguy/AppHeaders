//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, YTICropCoordinates;

@interface YTPostImage : NSObject
{
    NSString *_id;
    NSData *_imageData;
    YTICropCoordinates *_previewCoordinates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTICropCoordinates *previewCoordinates; // @synthesize previewCoordinates=_previewCoordinates;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (id)getCenterCoordinates:(id)arg1;
- (id)initWithId:(id)arg1 imageData:(id)arg2;

@end

