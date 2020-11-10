//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMBuildableObjectBuilder-Protocol.h>

@class HAMFormatDescription, HAMRangedURL, NSString, NSURL;
@protocol HAMFormat, HAMMediaChunkIndex;

@interface HAMDASHRepresentationBuilder : NSObject <HAMBuildableObjectBuilder>
{
    id <HAMFormat> _format;
    HAMRangedURL *_initializationURL;
    HAMRangedURL *_indexURL;
    id <HAMMediaChunkIndex> _segmentIndex;
    HAMFormatDescription *_formatDescription;
    NSURL *_segmentURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *segmentURL; // @synthesize segmentURL=_segmentURL;
@property(retain, nonatomic) HAMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
@property(retain, nonatomic) id <HAMMediaChunkIndex> segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(retain, nonatomic) HAMRangedURL *indexURL; // @synthesize indexURL=_indexURL;
@property(retain, nonatomic) HAMRangedURL *initializationURL; // @synthesize initializationURL=_initializationURL;
@property(retain, nonatomic) id <HAMFormat> format; // @synthesize format=_format;
- (_Bool)isValid;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

