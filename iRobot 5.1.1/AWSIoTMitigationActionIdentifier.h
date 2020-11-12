//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSString;

@interface AWSIoTMitigationActionIdentifier : AWSModel
{
    NSString *_actionArn;
    NSString *_actionName;
    NSDate *_creationDate;
}

+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *actionArn; // @synthesize actionArn=_actionArn;
- (void).cxx_destruct;

@end
