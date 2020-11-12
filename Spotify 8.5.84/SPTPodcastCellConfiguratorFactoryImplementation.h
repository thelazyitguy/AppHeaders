//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastCellConfiguratorFactory-Protocol.h"

@class NSString, SPTTheme;
@protocol GLUEImageLoader, GLUETheme, SPTExplicitContentAccessManager, SPTGLUEImageLoaderFactory, SPTPodcastTestManager;

@interface SPTPodcastCellConfiguratorFactoryImplementation : NSObject <SPTPodcastCellConfiguratorFactory>
{
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <GLUEImageLoader> _imageLoader;
    id <SPTPodcastTestManager> _testManager;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (id)createEpisodeCellConfiguratorWithStringFormatter:(id)arg1 buttonsFactory:(id)arg2 quoteComponentFactory:(id)arg3;
- (id)initWithTheme:(id)arg1 glueTheme:(id)arg2 imageLoaderFactory:(id)arg3 explicitContentAccessManager:(id)arg4 podcastTestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
