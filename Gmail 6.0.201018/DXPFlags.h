//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPFlags-Protocol.h"

@class PHTPhenotypeFlags;
@protocol PHTPhenotype;

@interface DXPFlags : NSObject <DXPFlags>
{
    PHTPhenotypeFlags *_allFlags;
    id <PHTPhenotype> _phenotype;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <PHTPhenotype> phenotype; // @synthesize phenotype=_phenotype;
@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
@property(readonly, nonatomic, getter=isDragAndDropDisabled) _Bool dragAndDropDisabled;
@property(readonly, nonatomic, getter=isSharingDisabled) _Bool sharingDisabled;
@property(readonly, nonatomic, getter=isPasteboardDisabled) _Bool pasteboardDisabled;
@property(readonly, nonatomic, getter=isAllDisabled) _Bool allDisabled;
- (void)updateFlags;
- (void)syncExperimentsWithSSOService:(id)arg1;
- (void)registerWithPhenotype;
- (unsigned long long)phenotypeDXPLibraryVersion;
- (id)phenotypeDXPConfigurationPackageName;
- (id)init;
- (id)initWithPhenotypeFlags:(id)arg1 phenotype:(id)arg2;

@end
