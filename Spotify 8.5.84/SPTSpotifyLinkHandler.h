//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTURISubtypeRegistryImplementation, _TtC21SPTLowLevelURIParsing29SPTSpotifyURIFallbackResolver;

@interface SPTSpotifyLinkHandler : NSObject
{
    _TtC21SPTLowLevelURIParsing29SPTSpotifyURIFallbackResolver *_fallbackResolver;
    SPTURISubtypeRegistryImplementation *_URISubtypeRegistry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTURISubtypeRegistryImplementation *URISubtypeRegistry; // @synthesize URISubtypeRegistry=_URISubtypeRegistry;
- (long long)openSpotifyURI:(id)arg1 withUnfilteredURI:(id)arg2 context:(id)arg3;
- (long long)handleCleanedSpotifyURI:(id)arg1 forOriginalURI:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) _TtC21SPTLowLevelURIParsing29SPTSpotifyURIFallbackResolver *fallbackResolver;
- (id)remapURI:(id)arg1;
- (id)supportedURISchemes;
- (long long)handleSpotifyURL:(id)arg1 context:(id)arg2;
- (id)initWithURISubtypeRegistry:(id)arg1;

@end
