//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCImageFetcher, GSCImageFetcherCache;
@protocol GDKContentProvider, GDKFileFetcher, SSOIdentity;

@interface GAVDriveLoaderFactory : NSObject
{
    id <GDKContentProvider> _contentProvider;
    id <GDKFileFetcher> _fileFetcher;
    GSCImageFetcher *_imageFetcher;
    GSCImageFetcherCache *_imageFetcherCache;
    id <SSOIdentity> _ssoIdentity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(retain, nonatomic) GSCImageFetcherCache *imageFetcherCache; // @synthesize imageFetcherCache=_imageFetcherCache;
@property(retain, nonatomic) GSCImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(retain, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(retain, nonatomic) id <GDKContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (id)loaderForFileIDResourceKeyPair:(id)arg1 fileTitle:(id)arg2 mimeType:(id)arg3 isTrashed:(_Bool)arg4 teamDriveTitle:(id)arg5 forceContentFetch:(_Bool)arg6 enableShortcutResolution:(_Bool)arg7;
- (id)loaderForFile:(id)arg1 forceContentFetch:(_Bool)arg2 enableShortcutResolution:(_Bool)arg3;
- (id)initWithContentProvider:(id)arg1 fileFetcher:(id)arg2 imageFetcher:(id)arg3 imageFetcherCache:(id)arg4 ssoIdentity:(id)arg5;

@end
