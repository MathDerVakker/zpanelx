<?php

/*
 +-----------------------------------------------------------------------+
 | plugins/password/localization/<lang>.inc                              |
 |                                                                       |
 | Localization file of the Roundcube Webmail Password plugin            |
 | Copyright (C) 2012-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-password/
*/

$labels = array();
$labels['changepasswd']  = 'שינוי סיסמה';
$labels['curpasswd']  = 'סיסמה נוכחית:';
$labels['newpasswd']  = 'סיסמה חדשה:';
$labels['confpasswd']  = 'אימות הסיסמה החדשה:';

$messages = array();
$messages['nopassword'] = 'נא להקליד סיסמה חדשה';
$messages['nocurpassword'] = 'נא להקיש הסיסמה הנוכחית';
$messages['passwordincorrect'] = 'הוקשה סיסמה נוכחית שגויה';
$messages['passwordinconsistency'] = 'הסיסמאות שהוקשו אינן תואמות, נא לנסות שנית.';
$messages['crypterror'] = 'לא נשמרה הסיסמה החדשה. חסר מנגנון הצפנה.';
$messages['connecterror'] = 'לא נשמרה הסיסמה החדשה. שגיאת תקשורת.';
$messages['internalerror'] = 'לא ניתן לשמור על הסיסמה החדשה.';
$messages['passwordshort'] = 'הסיסמה צריכה להיות לפחות בעלת $length תווים';
$messages['passwordweak'] = 'הסיסמה חייבת לכלול לפחות סיפרה אחת ולפחות סימן פיסוק אחד.';
$messages['passwordforbidden'] = 'הסיסמה מכילה תווים אסורים.';

?>
