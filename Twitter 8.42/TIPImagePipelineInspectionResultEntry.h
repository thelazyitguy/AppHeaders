//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImagePipelineInspectionResultEntry-Protocol.h>

@class NSString, NSURL, UIImage;

@interface TIPImagePipelineInspectionResultEntry : NSObject <TIPImagePipelineInspectionResultEntry>
{
    float _progress;
    NSString *_identifier;
    NSURL *_URL;
    unsigned long long _bytesUsed;
    UIImage *_image;
    struct CGSize _dimensions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

