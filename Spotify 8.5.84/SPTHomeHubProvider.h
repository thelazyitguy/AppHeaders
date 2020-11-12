//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentRegistry;
@protocol HUBComponentLayoutManager, HUBImageLoaderFactory, SPTHubCommandHandlerFactory, SPTHubLogger;

@interface SPTHomeHubProvider : NSObject
{
    id <SPTHubCommandHandlerFactory> _hubCommandHandlerFactory;
    HUBComponentRegistry *_hubComponentRegistry;
    id <HUBImageLoaderFactory> _hubImageLoaderFactory;
    id <HUBComponentLayoutManager> _hubComponentLayoutManager;
    id <SPTHubLogger> _hubLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTHubLogger> hubLogger; // @synthesize hubLogger=_hubLogger;
@property(retain, nonatomic) id <HUBComponentLayoutManager> hubComponentLayoutManager; // @synthesize hubComponentLayoutManager=_hubComponentLayoutManager;
@property(retain, nonatomic) id <HUBImageLoaderFactory> hubImageLoaderFactory; // @synthesize hubImageLoaderFactory=_hubImageLoaderFactory;
@property(retain, nonatomic) HUBComponentRegistry *hubComponentRegistry; // @synthesize hubComponentRegistry=_hubComponentRegistry;
@property(retain, nonatomic) id <SPTHubCommandHandlerFactory> hubCommandHandlerFactory; // @synthesize hubCommandHandlerFactory=_hubCommandHandlerFactory;
- (id)initWithHubCommandHandlerFactory:(id)arg1 hubComponentRegistry:(id)arg2 hubImageLoaderFactory:(id)arg3 hubComponentLayoutManager:(id)arg4 hubLogger:(id)arg5;

@end
