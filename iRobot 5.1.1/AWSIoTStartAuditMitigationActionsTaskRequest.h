//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSIoTAuditMitigationActionsTaskTarget, NSDictionary, NSString;

@interface AWSIoTStartAuditMitigationActionsTaskRequest : AWSRequest
{
    NSDictionary *_auditCheckToActionsMapping;
    NSString *_clientRequestToken;
    AWSIoTAuditMitigationActionsTaskTarget *_target;
    NSString *_taskId;
}

+ (id)targetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) AWSIoTAuditMitigationActionsTaskTarget *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *clientRequestToken; // @synthesize clientRequestToken=_clientRequestToken;
@property(retain, nonatomic) NSDictionary *auditCheckToActionsMapping; // @synthesize auditCheckToActionsMapping=_auditCheckToActionsMapping;
- (void).cxx_destruct;

@end

