//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKTAvatarPrimitive-Protocol.h"

@class GMDCContainerScheme, NSArray, NSString, UIView;
@protocol PKTAvatarComponentFactory, PKTAvatarConfig, PKTBadgedAvatarComponent, PKTPeopleLookupProcessor;

@interface PKTLookupAvatarPrimitive : NSObject <PKTAvatarPrimitive>
{
    NSArray *_lookupIDs;
    id <PKTAvatarComponentFactory> _avatarFactory;
    id <PKTPeopleLookupProcessor> _peopleLookupProcessor;
    id <PKTAvatarConfig> _config;
    id <PKTBadgedAvatarComponent> _avatarComponent;
    GMDCContainerScheme *_scheme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GMDCContainerScheme *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) id <PKTBadgedAvatarComponent> avatarComponent; // @synthesize avatarComponent=_avatarComponent;
@property(readonly, nonatomic) id <PKTAvatarConfig> config; // @synthesize config=_config;
@property(readonly, nonatomic) id <PKTPeopleLookupProcessor> peopleLookupProcessor; // @synthesize peopleLookupProcessor=_peopleLookupProcessor;
@property(readonly, nonatomic) id <PKTAvatarComponentFactory> avatarFactory; // @synthesize avatarFactory=_avatarFactory;
@property(retain, nonatomic) NSArray *lookupIDs; // @synthesize lookupIDs=_lookupIDs;
- (id)placeholderContacts;
- (void)updateLookupIDs:(id)arg1;
- (void)resolve;
@property(readonly, nonatomic) UIView *view;
- (id)initWithLookupIDs:(id)arg1 avatarFactory:(id)arg2 peopleLookupProcessor:(id)arg3 config:(id)arg4 visualElementParamsFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
