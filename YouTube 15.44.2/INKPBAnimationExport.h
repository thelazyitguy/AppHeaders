//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBImageExport;

@interface INKPBAnimationExport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) INKPBImageExport *frameOptions; // @dynamic frameOptions;
@property(nonatomic) float frameRate; // @dynamic frameRate;
@property(nonatomic) _Bool hasFrameOptions; // @dynamic hasFrameOptions;
@property(nonatomic) _Bool hasFrameRate; // @dynamic hasFrameRate;
@property(nonatomic) _Bool hasMaxFrames; // @dynamic hasMaxFrames;
@property(nonatomic) unsigned int maxFrames; // @dynamic maxFrames;

@end

