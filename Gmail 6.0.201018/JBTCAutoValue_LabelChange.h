//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTCLabelChange.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_SmartLabelChangeSource, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList;

@interface JBTCAutoValue_LabelChange : JBTCLabelChange
{
    ComGoogleCommonBaseOptional *labelToAdd_;
    ComGoogleCommonCollectImmutableList *labelsToRemove_;
    ComGoogleAppsBigtopDataItemsItemsProto_SmartLabelChangeSource *smartLabelChangeSource_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getSmartLabelChangeSource;
- (id)getLabelsToRemove;
- (id)getLabelToAdd;

@end
