//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationProperties, NSString;

@interface DYNExperimentsServiceImplOptions : NSObject
{
    _Bool _shouldAttachExperimentsToBreakpad;
    _Bool _forceEnableLinkRouter;
    _Bool _forceDefaultsForHubLaunch;
    NSString *_mendelPackageName;
    ApplicationProperties *_applicationProperties;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDefaultsForHubLaunch; // @synthesize forceDefaultsForHubLaunch=_forceDefaultsForHubLaunch;
@property(nonatomic) _Bool forceEnableLinkRouter; // @synthesize forceEnableLinkRouter=_forceEnableLinkRouter;
@property(nonatomic) _Bool shouldAttachExperimentsToBreakpad; // @synthesize shouldAttachExperimentsToBreakpad=_shouldAttachExperimentsToBreakpad;
@property(retain, nonatomic) ApplicationProperties *applicationProperties; // @synthesize applicationProperties=_applicationProperties;
@property(retain, nonatomic) NSString *mendelPackageName; // @synthesize mendelPackageName=_mendelPackageName;

@end
