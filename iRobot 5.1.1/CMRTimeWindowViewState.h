//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRLocalizedStringDescriptor, NSArray, NSString;

@interface CMRTimeWindowViewState : NSObject
{
    NSString *_headerTitleId;
    CMRLocalizedStringDescriptor *_descriptionText;
    NSString *_saveTextId;
    NSString *_cancelTextId;
    NSArray *_timeItems;
}

+ (id)TimeWindowViewStateWithHeaderTitleId:(id)arg1 descriptionText:(id)arg2 saveTextId:(id)arg3 cancelTextId:(id)arg4 timeItems:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *timeItems; // @synthesize timeItems=_timeItems;
@property(readonly, nonatomic) NSString *cancelTextId; // @synthesize cancelTextId=_cancelTextId;
@property(readonly, nonatomic) NSString *saveTextId; // @synthesize saveTextId=_saveTextId;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *headerTitleId; // @synthesize headerTitleId=_headerTitleId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithHeaderTitleId:(id)arg1 descriptionText:(id)arg2 saveTextId:(id)arg3 cancelTextId:(id)arg4 timeItems:(id)arg5;

@end
