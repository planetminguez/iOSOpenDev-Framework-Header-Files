/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <MailServices/MSMailDefaultService.h>


@interface MSSendEmail : MSMailDefaultService {
}
+ (id)sendEmail:(id)email delegate:(id)delegate;	// 0x5225
+ (id)smi_serverCommandName;	// 0x5219
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x5571
- (id)_didSendEmail:(id)email userInfo:(id)info;	// 0x5439
- (id)_sendEmail:(id)email delegate:(id)delegate;	// 0x52c1
@end
