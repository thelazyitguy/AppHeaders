//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, STKNASTNetworkManager;

@interface STKNASTManager : NSObject
{
    NSDictionary *_assetComparator;
    STKNASTNetworkManager *_networkManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) STKNASTNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) NSDictionary *assetComparator; // @synthesize assetComparator=_assetComparator;
- (void)parseAdFromJSON:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadAdFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
