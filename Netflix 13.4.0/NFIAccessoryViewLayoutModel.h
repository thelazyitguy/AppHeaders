//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NFIAccessoryViewLayoutModel : NSObject
{
    NSString *_ID;
    NSDictionary *_data;
    struct CGRect _rect;
    CDStruct_84bf8c3a _label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) CDStruct_84bf8c3a label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithDictionary:(id)arg1;

@end
