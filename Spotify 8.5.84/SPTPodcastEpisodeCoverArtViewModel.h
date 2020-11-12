//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTPodcastEpisodeEntityProviderDelegate-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol SPTImageLoader, SPTPodcastEpisode, SPTPodcastEpisodeCoverArtViewModelDelegate, SPTPodcastEpisodeEntityProvider;

@interface SPTPodcastEpisodeCoverArtViewModel : NSObject <SPTImageLoaderDelegate, SPTPodcastEpisodeEntityProviderDelegate>
{
    _Bool _shouldAnimateImageUpdate;
    id <SPTPodcastEpisodeCoverArtViewModelDelegate> _delegate;
    UIImage *_image;
    NSURL *_URL;
    id <SPTPodcastEpisode> _episode;
    id <SPTPodcastEpisodeEntityProvider> _entityProvider;
    id <SPTImageLoader> _imageLoader;
    NSURL *_imageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTPodcastEpisodeEntityProvider> entityProvider; // @synthesize entityProvider=_entityProvider;
@property(retain, nonatomic) id <SPTPodcastEpisode> episode; // @synthesize episode=_episode;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool shouldAnimateImageUpdate; // @synthesize shouldAnimateImageUpdate=_shouldAnimateImageUpdate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <SPTPodcastEpisodeCoverArtViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)entityProvider:(id)arg1 didLoadShow:(id)arg2 withError:(id)arg3;
- (void)entityProvider:(id)arg1 didLoadEpisode:(id)arg2 withError:(id)arg3;
@property(readonly, nonatomic) _Bool shouldBeVisible;
- (void)loadImageWithURL:(id)arg1;
- (id)imageURLForEpisode:(id)arg1 podcast:(id)arg2;
- (void)unsubscribe;
- (void)load;
- (id)initWithEpisodeURL:(id)arg1 episode:(id)arg2 entityProvider:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
